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

@interface AnalyticsFeature : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _nameIsSet;
    _Bool _versionIsSet;
    _Bool _version_descriptionIsSet;
    NSString *_name;
    NSString *_version;
    NSString *_version_description;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool version_descriptionIsSet; // @synthesize version_descriptionIsSet=_version_descriptionIsSet;
@property(copy, nonatomic) NSString *version_description; // @synthesize version_description=_version_description;
@property(nonatomic) _Bool versionIsSet; // @synthesize versionIsSet=_versionIsSet;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetVersion_description;
- (void)unsetVersion;
- (void)unsetName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2 version_description:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

