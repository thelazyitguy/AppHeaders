//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIRBinDetails : AIRModel
{
    NSString *_bin;
    NSString *_countryOfIssuance;
}

+ (long long)maxBinLength;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *countryOfIssuance; // @synthesize countryOfIssuance=_countryOfIssuance;
@property(readonly, copy, nonatomic) NSString *bin; // @synthesize bin=_bin;

@end

