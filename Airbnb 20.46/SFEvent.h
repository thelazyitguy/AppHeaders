//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString, SFHtDictionary;

@interface SFEvent : NSObject <NSCoding>
{
    unsigned long long _time;
    NSString *_type;
    NSString *_path;
    NSString *_userId;
    NSDictionary *_fields;
    NSString *_installationId;
    NSDictionary *_deviceProperties;
    SFHtDictionary *_iosAppState;
    SFHtDictionary *_iosDeviceProperties;
    NSDictionary *_metrics;
}

+ (id)listRequest:(id)arg1;
+ (id)eventWithType:(id)arg1 path:(id)arg2 fields:(id)arg3;
- (void).cxx_destruct;
@property(retain) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain) SFHtDictionary *iosDeviceProperties; // @synthesize iosDeviceProperties=_iosDeviceProperties;
@property(retain) SFHtDictionary *iosAppState; // @synthesize iosAppState=_iosAppState;
@property(retain) NSDictionary *deviceProperties; // @synthesize deviceProperties=_deviceProperties;
@property(retain) NSString *installationId; // @synthesize installationId=_installationId;
@property(retain) NSDictionary *fields; // @synthesize fields=_fields;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSString *type; // @synthesize type=_type;
@property unsigned long long time; // @synthesize time=_time;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)sanityCheck;
- (_Bool)isEssentiallyEqualTo:(id)arg1;
- (id)init;

@end

