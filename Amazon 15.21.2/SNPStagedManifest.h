//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPManifest.h"

@class NSArray, NSDictionary, SNPDialup;

@interface SNPStagedManifest : SNPManifest
{
    NSDictionary *_metadata;
    NSDictionary *_manifestDict;
    SNPDialup *_dialup;
    NSArray *_deps;
}

+ (id)processDialup:(id)arg1 forManifestDictionary:(id)arg2;
@property(retain, nonatomic) NSArray *deps; // @synthesize deps=_deps;
@property(readonly, nonatomic) SNPDialup *dialup; // @synthesize dialup=_dialup;
@property(readonly, nonatomic) NSDictionary *manifestDict; // @synthesize manifestDict=_manifestDict;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)dependencies;
- (id)bundleVersion;
- (id)url;
- (_Bool)stripped;
@property(readonly, nonatomic) _Bool split;
- (id)initWithDictionary:(id)arg1;

@end

