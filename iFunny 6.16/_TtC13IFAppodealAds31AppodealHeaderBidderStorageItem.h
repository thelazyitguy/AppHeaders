//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDMAuctionInfo, BDMRequest, NSDictionary, NSString;

@interface _TtC13IFAppodealAds31AppodealHeaderBidderStorageItem : NSObject
{
    // Error parsing type: , name: request
    // Error parsing type: , name: info
    // Error parsing type: , name: keywords
    // Error parsing type: , name: localExtras
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithRequest:(id)arg1 info:(id)arg2 keywords:(id)arg3 localExtras:(id)arg4;
@property(nonatomic, readonly) NSDictionary *localExtras; // @synthesize localExtras;
@property(nonatomic, readonly) NSString *keywords;
@property(nonatomic, readonly) BDMAuctionInfo *info; // @synthesize info;
@property(nonatomic, readonly) BDMRequest *request; // @synthesize request;

@end
