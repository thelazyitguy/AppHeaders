//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAPIResponseDecodable-Protocol.h"

@class NSDictionary, NSString;

@interface STPSourceWeChatPayDetails : NSObject <STPAPIResponseDecodable>
{
    NSString *_weChatAppURL;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(copy, nonatomic) NSString *weChatAppURL; // @synthesize weChatAppURL=_weChatAppURL;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
