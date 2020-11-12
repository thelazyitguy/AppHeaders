//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DYNConversationSuggestion, DYNConversationSuggestionsServiceListener, DYNConversationSuggestionsSnapshot;

@protocol DYNConversationSuggestionsService <NSObject>
@property(readonly, nonatomic) id <DYNConversationSuggestionsSnapshot> currentSnapshot;
- (_Bool)isValidatingConversationSuggestion:(id <DYNConversationSuggestion>)arg1;
- (void)validateConversationSuggestion:(id <DYNConversationSuggestion>)arg1 completion:(void (^)(unsigned long long))arg2;
- (void)refreshSubscription;
- (void)addConversationSuggestionsListener:(id <DYNConversationSuggestionsServiceListener>)arg1;
@end
