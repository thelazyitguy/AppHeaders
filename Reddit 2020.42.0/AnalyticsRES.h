//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsRES : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _versionIsSet;
    _Bool _night_mode;
    _Bool _night_modeIsSet;
    NSString *_version;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool night_modeIsSet; // @synthesize night_modeIsSet=_night_modeIsSet;
@property(nonatomic) _Bool night_mode; // @synthesize night_mode=_night_mode;
@property(nonatomic) _Bool versionIsSet; // @synthesize versionIsSet=_versionIsSet;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetNight_mode;
- (void)unsetVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 night_mode:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

