//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MUXSDKTiming;

@interface MUXSDKSession : NSObject
{
    NSString *_sessionId;
    long long _start;
    long long _expires;
    id <MUXSDKTiming> currentTime;
}

- (void).cxx_destruct;
@property(retain) id <MUXSDKTiming> currentTime; // @synthesize currentTime;
- (void)updateEnviornmentData:(id)arg1;
- (void)start;
- (void)startSession:(long long)arg1;
- (id)init;

@end
