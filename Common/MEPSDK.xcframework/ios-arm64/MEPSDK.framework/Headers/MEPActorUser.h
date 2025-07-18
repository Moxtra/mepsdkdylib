//
//  MEPActorUser.h
//  MEPSDK
//
//  Created by river on 2025/6/19.
//  Copyright © 2025 Moxtra. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MEPActorUser : NSObject
/**
 User id of this user.
 */
@property (nonatomic, strong, readonly, nullable) NSString *userId;
/**
 Unique id of this user.
 */
@property (nonatomic, strong, readonly, nullable) NSString *uniqueId;

/**
 Firstname of this user.
 */
@property (nonatomic, strong, readonly, nullable) NSString *firstname;

/**
 Lastname of this user.
 */
@property (nonatomic, strong, readonly, nullable) NSString *lastname;

/**
 Email of this user.
 */
@property (nonatomic, strong, readonly, nullable) NSString *email;

/**
 Phone number of this user.
 */
@property (nonatomic, strong, readonly, nullable) NSString *phoneNumber;

@end

NS_ASSUME_NONNULL_END
