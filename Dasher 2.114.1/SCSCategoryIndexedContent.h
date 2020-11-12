//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SCSBaseIndexedContent.h>

@class NSObject, NSString, SCSCategory;
@protocol SCSIndexedContentDelegate;

@interface SCSCategoryIndexedContent : SCSBaseIndexedContent
{
    NSObject<SCSIndexedContentDelegate> *delegate;
    NSString *name;
    SCSCategory *_category;
}

@property(readonly, nonatomic) SCSCategory *category; // @synthesize category=_category;
- (void)setName:(id)arg1;
- (id)name;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadContent:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfObjectWithContentDataId:(id)arg1;
- (id)dataForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (_Bool)isLoading;
- (_Bool)isEmpty;
- (_Bool)canLoadMore;
- (id)initWithParentCategory:(id)arg1;

@end
