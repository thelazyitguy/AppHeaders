//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFItemSearcherProtocol-Protocol.h>

@class IFTrendingChatsRetriever, NSString;
@protocol IFItemSearcherDelegate, _TtP25FCFuncorpNetworkingiFunny20NetworkSearchService_;

@interface IFOpenChatSearcher : NSObject <IFItemSearcherProtocol>
{
    _Bool _isBusy;
    _Bool _hasNext;
    NSObject<IFItemSearcherDelegate> *searchDelegate;
    NSString *_nexCursor;
    IFTrendingChatsRetriever *_trendingChatsRetriever;
    id <_TtP25FCFuncorpNetworkingiFunny20NetworkSearchService_> _searchService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP25FCFuncorpNetworkingiFunny20NetworkSearchService_> searchService; // @synthesize searchService=_searchService;
@property(retain, nonatomic) IFTrendingChatsRetriever *trendingChatsRetriever; // @synthesize trendingChatsRetriever=_trendingChatsRetriever;
@property(retain, nonatomic) NSString *nexCursor; // @synthesize nexCursor=_nexCursor;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) __weak NSObject<IFItemSearcherDelegate> *searchDelegate; // @synthesize searchDelegate;
- (_Bool)loadNextItemsWithSearchText:(id)arg1;
- (void)reset;
- (id)init;
- (id)initWithSearchService:(id)arg1 trendingChatsRetriever:(id)arg2;

@end
