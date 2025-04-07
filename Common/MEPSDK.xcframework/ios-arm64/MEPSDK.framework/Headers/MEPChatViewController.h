//
//  MEPChatViewController.h
//  MEPSDK
//
//  Created by John on 2022/11/21.
//  Copyright © 2022 Moxtra. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class MEPChatViewController;
@protocol MEPChatViewControllerDelegate <NSObject>
@optional
/**
 When chat tabs scrolled, regardless by manually or automatically,  this callback will be triggered, with parameter of target tab index.
 */
- (void)viewController:(MEPChatViewController *)viewController didScrollToTab:(NSUInteger)tabIndex;
@end

/**
 The MEPChatViewController class provides the main chat UI components. You should specify a chat when initializing so that the view controller could know what content it should present.
 */
@interface MEPChatViewController : UIViewController
/**
 Initialize a chat view controller with a specified chat.
 
 @param chat The related chat
 @param tabIndex Index of tab you wish to focus, outbound index will result as 0.
 @return Return a newly initialized chat view controller
 */
- (instancetype)initWithChat:(MEPChat *)chat tab:(NSUInteger)tabIndex;

/**
 Switch to a specified tab with tab index.
 
 @param tabIndex The tab at this index is going to show, outbound index will result as 0.
 @param animated Set YES to animate the switch progress, otherwise set NO.
 */
- (void)switchToTab:(NSUInteger)tabIndex animated:(BOOL)animated;

/**
 Scroll this chat view to the position that the specified feed is placed at the bottom.
 
 @param feed The feed will show at the bottom (Sequence id from REST API is also acceptable).
 */
- (void)scrollToFeed:(id)feed;

#pragma mark - Unavailable

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil UNAVAILABLE_ATTRIBUTE;
@property (nonatomic, assign) id<MEPChatViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
