//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SRDSSimsQuery : NSObject
{
    NSArray *_asins;
    NSString *_merchantId;
    NSNumber *_maxResults;
    NSString *_reftagOverride;
}

@property(readonly, nonatomic) NSString *reftagOverride; // @synthesize reftagOverride=_reftagOverride;
@property(readonly, nonatomic) NSNumber *maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(readonly, nonatomic) NSArray *asins; // @synthesize asins=_asins;
- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBuilder:(id)arg1;

@end
