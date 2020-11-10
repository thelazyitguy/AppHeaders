//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUISearchCellViewModelProtocol-Protocol.h"

@class NFUISearchResultsListViewModel, NSDictionary, NSIndexPath, NSString;

@interface NFUISearchSuggestionCellViewModel : NSObject <NFUISearchCellViewModelProtocol>
{
    _Bool _isCollection;
    NFUISearchResultsListViewModel *_listViewModel;
    NSIndexPath *_indexPath;
    NSString *_title;
    NSDictionary *_data;
}

+ (id)instance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) _Bool isCollection; // @synthesize isCollection=_isCollection;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak NFUISearchResultsListViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
- (id)accessibilityIdentifier;
- (void)configureWithData:(id)arg1;

@end
