//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleAppsXplatHttpFrequency : NSObject
{
    int eventCount_;
    long long periodLength_;
    JavaUtilConcurrentTimeUnit *unit_;
}

- (void)dealloc;
- (id)description;
- (id)getUnit;
- (long long)getPeriodLength;
- (int)getEventCount;

@end
