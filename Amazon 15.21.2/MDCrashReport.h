//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MDCrashReport : NSObject
{
    NSData *_crashData;
    long long _crashFormat;
}

+ (id)crashReportWithData:(id)arg1 crashFormat:(long long)arg2;
@property long long crashFormat; // @synthesize crashFormat=_crashFormat;
@property(retain) NSData *crashData; // @synthesize crashData=_crashData;
- (void).cxx_destruct;

@end
