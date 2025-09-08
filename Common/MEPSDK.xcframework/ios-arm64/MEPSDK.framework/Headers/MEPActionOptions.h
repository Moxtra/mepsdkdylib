//
//  MEPActionOptions.h
//  MEPSDK
//
//  Created by river on 2025/6/19.
//  Copyright © 2025 Moxtra. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MEPActionOptions : NSObject

@end

typedef NS_ENUM(NSUInteger, MEPLaunchWebAppMethod) {
    MEPLaunchWebAppMethodGet,
    MEPLaunchWebAppMethodPost
};

@interface MEPLaunchWebAppOptions: MEPActionOptions
/**
 Method of this launch web app.
 */
@property (nonatomic, assign, readonly) MEPLaunchWebAppMethod method;
/**
 Url of this launch web app.
 */
@property (nonatomic, copy, readonly) NSString *url;
/**
 Params of this launch web app.
 */
@property (nonatomic, strong, readonly) NSDictionary *params;

@end

NS_ASSUME_NONNULL_END
