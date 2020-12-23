//
//  MEPUser.h
//  MEPSDK
//
//  Copyright © 2020 Moxtra. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MEPUser : NSObject

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
 Title of this user.
 */
@property (nonatomic, strong, readonly, nullable) NSString *title;
@end

NS_ASSUME_NONNULL_END
