//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString, SRDSSearchResultModel;
@protocol SRDSSearchStyledTextModel;

@interface SRDSSearchBuyItAgainWidgetModel : JSONModel
{
    NSString *_identifier;
    SRDSSearchResultModel *_product;
    NSArray<SRDSSearchStyledTextModel> *_header;
    NSArray<SRDSSearchStyledTextModel> *_searchTerm;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel> *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel> *header; // @synthesize header=_header;
@property(retain, nonatomic) SRDSSearchResultModel *product; // @synthesize product=_product;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end
