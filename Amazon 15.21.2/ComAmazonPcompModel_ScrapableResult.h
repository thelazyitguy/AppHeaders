//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class ComAmazonPcompModel_ScrapableWhitelist, NSArray, NSDictionary, NSString;

@interface ComAmazonPcompModel_ScrapableResult : CoralModel <NSCoding, NSCopying>
{
    NSDictionary *_allowListMap;
    NSArray *_denyList;
    NSString *_version;
    ComAmazonPcompModel_ScrapableWhitelist *_whitelist;
    NSArray *_blacklist;
}

+ (id)mapTypeForProperty:(id)arg1;
+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) NSArray *blacklist; // @synthesize blacklist=_blacklist;
@property(retain, nonatomic) ComAmazonPcompModel_ScrapableWhitelist *whitelist; // @synthesize whitelist=_whitelist;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *denyList; // @synthesize denyList=_denyList;
@property(retain, nonatomic) NSDictionary *allowListMap; // @synthesize allowListMap=_allowListMap;
- (void).cxx_destruct;

@end

