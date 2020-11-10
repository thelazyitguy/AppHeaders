//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSString;
@protocol IBGFeatureRequestDelegate;

@interface IBGFeatureRequest : IBGNetworkRequest
{
    _Bool _isLoadingMore;
    unsigned long long _pageNumber;
    id <IBGFeatureRequestDelegate> _delegate;
    NSString *_dataUrl;
    long long _sortingType;
    long long _filterType;
}

@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) long long sortingType; // @synthesize sortingType=_sortingType;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(nonatomic) __weak id <IBGFeatureRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
- (void).cxx_destruct;
- (id)getParameters;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithDelegate:(id)arg1 pageNumber:(unsigned long long)arg2 sortingType:(long long)arg3 filterType:(long long)arg4;

@end

