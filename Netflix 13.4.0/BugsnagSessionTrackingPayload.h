//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BugsnagConfiguration, NSArray, NSString;

@interface BugsnagSessionTrackingPayload : NSObject
{
    NSArray *_sessions;
    BugsnagConfiguration *_config;
    NSString *_codeBundleId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *codeBundleId; // @synthesize codeBundleId=_codeBundleId;
@property(retain, nonatomic) BugsnagConfiguration *config; // @synthesize config=_config;
@property(retain) NSArray *sessions; // @synthesize sessions=_sessions;
- (id)toJson;
- (id)initWithSessions:(id)arg1 config:(id)arg2 codeBundleId:(id)arg3;

@end
