//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ADEumCorrelationContext : NSObject
{
    _Bool _hasServerEntryPointErrors;
    NSString *_clientRequestGUID;
    NSString *_serverSnapshotType;
    NSArray *_relatedBTs;
    NSString *_globalAccountName;
}

+ (id)contextWithHeaders:(id)arg1;
+ (id)contextWithResponse:(id)arg1;
@property(nonatomic) _Bool hasServerEntryPointErrors; // @synthesize hasServerEntryPointErrors=_hasServerEntryPointErrors;
@property(retain, nonatomic) NSString *globalAccountName; // @synthesize globalAccountName=_globalAccountName;
@property(retain, nonatomic) NSArray *relatedBTs; // @synthesize relatedBTs=_relatedBTs;
@property(retain, nonatomic) NSString *serverSnapshotType; // @synthesize serverSnapshotType=_serverSnapshotType;
@property(retain, nonatomic) NSString *clientRequestGUID; // @synthesize clientRequestGUID=_clientRequestGUID;
- (void).cxx_destruct;
- (id)description;

@end
