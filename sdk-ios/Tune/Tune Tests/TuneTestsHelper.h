//
//  TuneTestsHelper.h
//  Tune
//
//  Created by John Bender on 12/18/13.
//  Copyright (c) 2013 Tune. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString* const kTestAdvertiserId;
FOUNDATION_EXPORT NSString* const kTestConversionKey;
FOUNDATION_EXPORT NSString* const kTestBundleId;
FOUNDATION_EXPORT const NSTimeInterval TUNE_TEST_NETWORK_REQUEST_DURATION;

void waitFor( NSTimeInterval duration );
void waitFor1( NSTimeInterval duration, BOOL* finished );

void emptyRequestQueue();
void networkOffline();
void networkOnline();

int char2hex(unsigned char c);
