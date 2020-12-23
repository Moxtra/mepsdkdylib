//
//  MEPChat.h
//  MEPSDK
//
//  Copyright © 2020 Moxtra. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MEPChatTag: NSObject

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *value;

@end


/**
- MEPChatTypeNormal:moxtra channel
- MEPChatTypeWeChat: WeChat channel
- MEPChatTypeWhatsApp: WhatsApp channel
*/
typedef NS_ENUM(NSUInteger, MEPChatType) {
    MEPChatTypeNormal,
    MEPChatTypeWeChat,
    MEPChatTypeWhatsApp
};

@interface MEPChat : NSObject

@property (nonatomic, copy, readonly) NSString *chatID;
@property (nonatomic, assign, readonly) MEPChatType chatType;
/**
A boolean value indicating whether chat is active.
*/
@property (nonatomic, assign, readonly) BOOL isActive;

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (instancetype)new UNAVAILABLE_ATTRIBUTE;

- (void)setTagWithName:(NSString *)name value:(NSString *)value completionHandler:(void(^__nullable)(NSError * __nullable error))completionHandler;
- (void)getTagsWithCompletionHandler:(void(^)(NSArray<MEPChatTag *> *__nullable tagsOrNil, NSError *__nullable errorOrNil))completionHandler;

- (void)getMembersWithCompletion:(void(^__nullable)(NSError * __nullable errorOrNil, NSArray<MEPUser *> *__nullable members))completionHandler;
@end

NS_ASSUME_NONNULL_END
