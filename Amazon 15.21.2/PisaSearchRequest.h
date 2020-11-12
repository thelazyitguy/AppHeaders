//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PisaRequest.h"

@class NSArray, NSString, PisaSearchSortOption, PisaSmartRefinement;

@interface PisaSearchRequest : PisaRequest
{
    _Bool _returnRefinements;
    NSString *_terms;
    NSString *_browseNode;
    PisaSmartRefinement *_smartDepartmentRestriction;
    NSString *_brand;
    PisaSearchSortOption *_sortOption;
    NSArray *_searchRefinements;
}

@property(nonatomic) _Bool returnRefinements; // @synthesize returnRefinements=_returnRefinements;
@property(retain, nonatomic) NSArray *searchRefinements; // @synthesize searchRefinements=_searchRefinements;
@property(retain, nonatomic) PisaSearchSortOption *sortOption; // @synthesize sortOption=_sortOption;
@property(readonly, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) PisaSmartRefinement *smartDepartmentRestriction; // @synthesize smartDepartmentRestriction=_smartDepartmentRestriction;
@property(readonly, nonatomic) NSString *browseNode; // @synthesize browseNode=_browseNode;
@property(readonly, nonatomic) NSString *terms; // @synthesize terms=_terms;
- (void).cxx_destruct;
- (id)requestString;
- (id)initWithBrand:(id)arg1;
- (id)initWithSearchTerms:(id)arg1;
- (id)initWithBrowseNode:(id)arg1;
- (id)initWithSearchTerms:(id)arg1 restrictedToBrowseNode:(id)arg2;
- (Class)responseClass;

@end
