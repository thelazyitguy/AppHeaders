//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/GPBMessage.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GCKOCEnvironmentScan : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bleTokensArray; // @dynamic bleTokensArray;
@property(readonly, nonatomic) unsigned long long bleTokensArray_Count; // @dynamic bleTokensArray_Count;
@property(retain, nonatomic) NSMutableArray *wifiAccessPointArray; // @dynamic wifiAccessPointArray;
@property(readonly, nonatomic) unsigned long long wifiAccessPointArray_Count; // @dynamic wifiAccessPointArray_Count;

@end

