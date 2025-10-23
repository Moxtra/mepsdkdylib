//
//  MEPAction.h
//  MEPSDK
//
//  Created by river on 2025/6/19.
//  Copyright © 2025 Moxtra. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, MEPActionType) {
    MEPActionTypeLaunchWebApp
};

typedef NS_ENUM(NSUInteger, MEPActionButtonType) {
    MEPActionButtonTypeLaunch,
    MEPActionButtonTypeComplete
};

@class MEPActorUser;
@class MEPActionOptions;

@interface MEPAction : NSObject
/**
 Id of this action.
 */
@property (nonatomic, assign, readonly) UInt64 actionId;
/**
 Workspace id of this action.
 */
@property (nonatomic, copy, readonly) NSString *workspaceId;

/**
 Type of this action.
 */
@property (nonatomic, assign, readonly) MEPActionType type;

/**
 Action button type of this action.
 */
@property (nonatomic, assign, readonly) MEPActionButtonType actionButtonType;
/**
 Actor of this action.
 */
@property (nonatomic, strong, readonly, nullable) MEPActorUser *actor;
/**
 Options of this action.
 */
@property (nonatomic, strong, readonly, nullable) MEPActionOptions *actionOptions;

@end

NS_ASSUME_NONNULL_END
