//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNWorldCellContentViewDelegate-Protocol.h"

@class NSString;
@protocol DYNConversationSuggestionsService, DYNExperimentsService, DYNSharedLayerService, DYNWorldCellContentViewDelegate, DYNWorldStateService, GIPAccountID;

@interface DYNWorldTabChildDataModelProcessor : NSObject <DYNWorldCellContentViewDelegate>
{
    int _worldTabType;
    _Bool _preventUnseenRoomBadge;
    id <DYNWorldCellContentViewDelegate> _contentViewDelegate;
    id <GIPAccountID> _accountID;
    id <DYNConversationSuggestionsService> _conversationSuggestionsService;
    id <DYNExperimentsService> _experimentsService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNWorldStateService> _worldStateService;
    _Bool _roomNotificationSettingsEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool roomNotificationSettingsEnabled; // @synthesize roomNotificationSettingsEnabled=_roomNotificationSettingsEnabled;
- (id)localizedRoomsEmptyStateString;
- (id)emptyStateText;
- (id)sortStarredGroupSummaries:(id)arg1;
- (_Bool)shouldShowConversationSuggestions;
- (id)worldItemFromGroupSummary:(id)arg1;
- (id)headerItemWithTitle:(id)arg1;
- (id)remainingSectionHeaderTitle;
- (id)remainingSectionHeaderItem;
- (id)starredSectionHeaderItem;
- (id)suggestedSectionHeaderItem;
- (unsigned int)additionalWorldTabTypeFilterOptions;
- (id)remainingSectionItemsFromWorldSnapshot:(id)arg1;
- (id)starredSectionItemsFromWorldSnapshot:(id)arg1;
- (id)messageRequestsItemFromWorldSnapshot:(id)arg1;
- (id)itemForConversationSuggestion:(id)arg1;
- (id)conversationSuggestionsItemFromSnapshot:(id)arg1;
- (id)consumerLimitedBannerItem;
- (void)worldCellContentViewObjectReceivedLongPress:(id)arg1;
- (id)cellModelsFromWorldSnapshot:(id)arg1 conversationSuggestionsSnapshot:(id)arg2;
- (id)initWithWorldTabType:(int)arg1 preventUnseenRoomBadge:(_Bool)arg2 contentViewDelegate:(id)arg3 accountID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
