//
//  MEPMeet.h
//  MEPSDK
//
//  Copyright © 2020 Moxtra. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MEPMeet : NSObject

/**
The id of this meet.
*/
@property (nonatomic, copy, readonly) NSString *meetID;

/**
Topic of the meet.
*/
@property (nonatomic, copy, readonly) NSString *topic;

/**
has password.
*/
@property (nonatomic, readonly) BOOL hasPassword;

/**
password of the meet.
*/
@property (nonatomic, copy, readonly, nullable) NSString *password;
@end

NS_ASSUME_NONNULL_END
