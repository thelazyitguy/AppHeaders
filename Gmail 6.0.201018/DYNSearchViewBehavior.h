//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNDMSupplementalRenderDelegate-Protocol.h"
#import "DYNSearchEmptyResultsContentViewObjectDelegate-Protocol.h"
#import "DYNSearchFilterPanelContentViewObjectDelegate-Protocol.h"
#import "DYNSearchTabBarViewDelegate-Protocol.h"
#import "DYNSearchTitleViewDelegate-Protocol.h"
#import "DYNStreamBehavior-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class DYNSearchFilterPanelContentView, DYNSearchFilterPanelContentViewObject, DYNSearchState, DYNSearchTabBarView, DYNSearchTitleView, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol DYNAutocompleteManager, DYNExperimentsService, DYNGroupId, DYNMemberCacheService, DYNSharedLayerService, DYNStream, GIPAccountID;

@interface DYNSearchViewBehavior : NSObject <DYNSearchEmptyResultsContentViewObjectDelegate, DYNSearchFilterPanelContentViewObjectDelegate, DYNSearchTabBarViewDelegate, DYNSearchTitleViewDelegate, DYNStreamBehavior, DYNDMSupplementalRenderDelegate, UIScrollViewDelegate>
{
    id <GIPAccountID> _accountID;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNExperimentsService> _experimentsService;
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNStream> _stream;
    id <DYNGroupId> _groupID;
    NSString *_groupName;
    id <DYNAutocompleteManager> _autocompleteManager;
    NSArray *_autocompleteUsers;
    id <DYNAutocompleteManager> _queryAutocompleteManager;
    NSArray *_queryAutocompleteUsers;
    NSMutableArray *_selectedQueryAutocompleteUsers;
    NSArray *_queryFilteredGroupUsers;
    NSArray *_groupUsers;
    DYNSearchState *_searchState;
    _Bool _searchingThisGroup;
    NSMutableSet *_selectedUserIDs;
    NSMutableSet *_selectedContentTypes;
    DYNSearchTitleView *_searchTitleView;
    DYNSearchTabBarView *_searchTabBarView;
    DYNSearchFilterPanelContentViewObject *_searchFilterPanelCVO;
    DYNSearchFilterPanelContentView *_searchFilterPanelContentView;
    _Bool _titleViewHidden;
    _Bool _isHubMode;
    NSString *_searchText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (_Bool)isLandscape;
- (void)resignFirstResponderIfLandscape;
- (double)heightForView:(id)arg1;
- (void)scrollToTopIfNecessary;
- (id)groupUsersFromGroupMembersArray:(id)arg1;
- (id)contentViewWithObject:(id)arg1;
- (id)userWithUserIDString:(id)arg1 inUsersArray:(id)arg2;
- (void)addUserIDsFromUsersArray:(id)arg1 toUserIDsSet:(id)arg2;
- (_Bool)usersArray:(id)arg1 containsUserWithIDString:(id)arg2;
- (void)constructMemberListAndUpdateCVO;
- (id)modelUserForAutocompleteUser:(id)arg1;
- (void)setTextFieldPlaceholderWithoutGroup;
- (void)updateTextFieldPlaceholder;
- (id)userIDsListFromSet:(id)arg1;
- (void)didUpdateGroupName;
- (void)searchStateUpdatedWithSearchCVO:(id)arg1;
- (void)fetchSearchSuggestionsWithQuery:(id)arg1;
- (void)failurePopToWorldView;
- (void)onGroupInfoUpdatedWithGroup:(id)arg1;
- (void)setUpMeFilter;
- (void)setUpSearchAll;
- (void)triggerSearchWithText:(id)arg1;
- (id)newEmptyResultsCVO;
- (void)addEmptyResultContentToModel:(id)arg1;
- (void)setUpQueryAutocompleteManager;
- (void)autocompleteManagerDidBeginSessionWithUsers:(id)arg1 hasMoreCallbacks:(_Bool)arg2;
- (void)setUpAutocompleteManager;
- (void)reportUnselectedAutocompleteUserWithUserID:(id)arg1;
- (void)reportSelectedAutocompleteUserWithUserID:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchTitleViewTextFieldDidChange:(id)arg1;
- (void)handleEventsInStream:(id)arg1 withState:(id)arg2 oldState:(id)arg3;
- (void)finalizeWithStreamState:(id)arg1;
- (void)initializeWithStream:(id)arg1 state:(id)arg2;
- (void)didPanSearchTabBarView:(id)arg1;
- (void)searchTabBarView:(id)arg1 didTapButtonWithType:(int)arg2;
- (void)searchFilterPanelDidChangeContentTypesSelected:(id)arg1;
- (void)searchFilterPanel:(id)arg1 didUnselectUserWithID:(id)arg2;
- (void)searchFilterPanel:(id)arg1 didSelectUserWithID:(id)arg2;
- (void)allRoomsSearchTapped;
- (id)modelAfterRemovingObjectsFromModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterProcessingObjectsInModel:(id)arg1 withState:(id)arg2;
- (id)modelAfterInsertingObjectsIntoModel:(id)arg1 withState:(id)arg2;
- (id)initAllSearchWithAccountID:(id)arg1;
- (id)initWithGroupID:(id)arg1 accountID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
