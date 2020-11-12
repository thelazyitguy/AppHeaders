//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RDCConditionsFactory, RDCConfig;

@interface RDCRawItemParser : NSObject
{
    RDCConditionsFactory *_conditionsFactory;
    RDCConfig *_config;
}

@property(retain, nonatomic) RDCConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) RDCConditionsFactory *conditionsFactory; // @synthesize conditionsFactory=_conditionsFactory;
- (void).cxx_destruct;
- (_Bool)isNull:(id)arg1;
- (void)populatePages:(struct NSMutableDictionary *)arg1 withJSON:(id)arg2 fetchedFromDisk:(long long)arg3 context:(id)arg4;
- (id)extractMinAppVersion:(id)arg1;
- (id)compactConversion:(id)arg1 error:(id *)arg2;
- (_Bool)requiresCompactConversion:(id)arg1;
- (void)generateMenuFromJSONData:(id)arg1 context:(id)arg2 dataSource:(long long)arg3 withSuccessCallback:(CDUnknownBlockType)arg4 failureCallback:(CDUnknownBlockType)arg5;
- (void)generateMenuFromFile:(id)arg1 context:(id)arg2 dataSource:(long long)arg3 withSuccessCallback:(CDUnknownBlockType)arg4 failureCallback:(CDUnknownBlockType)arg5;
- (id)initWithConfig:(id)arg1 conditionsFactory:(id)arg2;
- (id)init;

@end
