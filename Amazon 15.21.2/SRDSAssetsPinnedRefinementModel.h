//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray;
@protocol SRDSAssetsQueryStringParameterModel;

@interface SRDSAssetsPinnedRefinementModel : JSONModel
{
    NSArray<SRDSAssetsQueryStringParameterModel> *_queryStringParams;
    NSArray *_refinementIdentifiers;
    NSArray *_clearIdentifiers;
}

@property(retain, nonatomic) NSArray *clearIdentifiers; // @synthesize clearIdentifiers=_clearIdentifiers;
@property(retain, nonatomic) NSArray *refinementIdentifiers; // @synthesize refinementIdentifiers=_refinementIdentifiers;
@property(retain, nonatomic) NSArray<SRDSAssetsQueryStringParameterModel> *queryStringParams; // @synthesize queryStringParams=_queryStringParams;
- (void).cxx_destruct;

@end
