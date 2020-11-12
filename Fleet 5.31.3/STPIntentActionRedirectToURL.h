//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/STPAPIResponseDecodable-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface STPIntentActionRedirectToURL : NSObject <STPAPIResponseDecodable>
{
    NSURL *_url;
    NSURL *_returnURL;
    NSString *_threeDSSourceID;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(copy, nonatomic) NSString *threeDSSourceID; // @synthesize threeDSSourceID=_threeDSSourceID;
@property(retain, nonatomic) NSURL *returnURL; // @synthesize returnURL=_returnURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
