//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFManifestAccess/_TtP16NFManifestCommon15NFTrickplayInfo_-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface TrickplayAccess : NSObject <_TtP16NFManifestCommon15NFTrickplayInfo_>
{
    NSDictionary *_info;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) NSArray *urls;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long height;
@property(readonly, nonatomic) unsigned long long width;
@property(readonly, copy, nonatomic) NSString *downloadableId;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
