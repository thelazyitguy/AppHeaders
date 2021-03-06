//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFChatItemPickModelDelegate-Protocol.h>
#import <Funny/IFChatListFetcherDelegate-Protocol.h>
#import <Funny/IFChatUserSearcherDelegate-Protocol.h>
#import <Funny/IFModelProtocol-Protocol.h>

@class IFChatItemPickModel, IFChatListFetcher, IFChatUserGlobalSearcher, NSMutableArray, NSString;
@protocol IFSharingRecipientsModelControllerProtocol;

@interface IFSharingRecipientsModel : NSObject <IFModelProtocol, IFChatItemPickModelDelegate, IFChatUserSearcherDelegate, IFChatListFetcherDelegate>
{
    _Bool _shouldFetchChats;
    IFChatItemPickModel *_pickModel;
    IFChatUserGlobalSearcher *_userSearcher;
    NSString *_searchText;
    NSObject<IFSharingRecipientsModelControllerProtocol> *_controller;
    NSMutableArray *_recipientsSections;
    IFChatListFetcher *_netChatListFetcher;
}

+ (unsigned long long)indexOfRecipientWithCollocutorId:(id)arg1 amongRecipients:(id)arg2;
+ (unsigned long long)indexOfRecipientWithId:(id)arg1 amongRecipients:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IFChatListFetcher *netChatListFetcher; // @synthesize netChatListFetcher=_netChatListFetcher;
@property(nonatomic) _Bool shouldFetchChats; // @synthesize shouldFetchChats=_shouldFetchChats;
@property(retain, nonatomic) NSMutableArray *recipientsSections; // @synthesize recipientsSections=_recipientsSections;
@property(nonatomic) __weak NSObject<IFSharingRecipientsModelControllerProtocol> *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) IFChatUserGlobalSearcher *userSearcher; // @synthesize userSearcher=_userSearcher;
@property(retain, nonatomic) IFChatItemPickModel *pickModel; // @synthesize pickModel=_pickModel;
- (unsigned long long)indexOfSectionWithType:(unsigned long long)arg1;
- (id)indexPathForItemWithCollocutorId:(id)arg1;
- (id)indexPathForItemWithId:(id)arg1;
- (void)addRecipientsToOthersSection:(id)arg1;
- (void)addRecipientsToDefaultSection:(id)arg1;
- (void)reloadCellForItemWithId:(id)arg1;
- (_Bool)loadDefaultRecipientsFromCache;
- (void)fetchChatsFromSendbirdIfNeeded;
- (void)chatConnect;
- (void)searchRecipients:(id)arg1;
- (void)didConnectToChat:(id)arg1;
- (void)chatListFetcher:(id)arg1 error:(id)arg2;
- (void)chatListFetcher:(id)arg1 didLoadedChatItems:(id)arg2 hasNext:(_Bool)arg3;
- (_Bool)searcher:(id)arg1 shouldAddUserWithId:(id)arg2;
- (void)searcher:(id)arg1 didRecieveEntities:(id)arg2 error:(id)arg3;
- (void)pickModel:(id)arg1 didUnpickedItemWithId:(id)arg2;
- (void)pickModel:(id)arg1 didPickedItemWithId:(id)arg2;
- (id)getPickedRecipients;
- (void)loadInitial;
- (void)loadWithSearchText:(id)arg1;
- (void)reset;
- (id)nameOfSection:(unsigned long long)arg1;
- (id)recepientAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long sectionCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

