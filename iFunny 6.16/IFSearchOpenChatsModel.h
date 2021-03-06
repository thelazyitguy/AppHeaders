//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFItemSearcherDelegate-Protocol.h>
#import <Funny/IFItemsListNextPreloaderControllerDelegate-Protocol.h>

@class IFItemsListNextPreloaderController, NSMutableArray, NSString;
@protocol IFItemSearcherProtocol, IFSearchOpenChatsModelControllerProtocol;

@interface IFSearchOpenChatsModel : NSObject <IFItemSearcherDelegate, IFItemsListNextPreloaderControllerDelegate>
{
    NSMutableArray *_openChatsItems;
    id <IFSearchOpenChatsModelControllerProtocol> _controller;
    id <IFItemSearcherProtocol> _searcher;
    IFItemsListNextPreloaderController *_listBuilder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IFItemsListNextPreloaderController *listBuilder; // @synthesize listBuilder=_listBuilder;
@property(retain, nonatomic) id <IFItemSearcherProtocol> searcher; // @synthesize searcher=_searcher;
@property(nonatomic) __weak id <IFSearchOpenChatsModelControllerProtocol> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSMutableArray *openChatsItems; // @synthesize openChatsItems=_openChatsItems;
- (id)openChannelContentEntityAtIndex:(unsigned long long)arg1;
- (id)itemForEntityToAdd:(id)arg1;
- (_Bool)isPreloaderItem:(id)arg1;
- (id)preloaderItem;
- (id)items;
- (void)searcher:(id)arg1 didRecieveEntities:(id)arg2 error:(id)arg3;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (id)openChatAtIndex:(unsigned long long)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (void)reset;
- (_Bool)loadNextItemsWithSearchText:(id)arg1;
- (id)initWithSearcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

