//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierEntityContextMenuButtonViewModel-Protocol.h"

@class NSDictionary, NSString, NSURL, SPTFreeTierEntityContextMenuLogger;
@protocol SPTContextMenuPresenterFactory, SPTFreeTierEntityContextMenuButtonViewModelDelegate, SPTUBIPageInstanceIdentifierProvider;

@interface SPTFreeTierTrackContextMenuButtonViewModel : NSObject <SPTFreeTierEntityContextMenuButtonViewModel>
{
    id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> _delegate;
    unsigned long long _state;
    id <SPTContextMenuPresenterFactory> _presenterFactory;
    NSURL *_viewURI;
    NSDictionary *_metadata;
    SPTFreeTierEntityContextMenuLogger *_logger;
    id <SPTUBIPageInstanceIdentifierProvider> _pageInstanceIdProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIPageInstanceIdentifierProvider> pageInstanceIdProvider; // @synthesize pageInstanceIdProvider=_pageInstanceIdProvider;
@property(readonly, nonatomic) SPTFreeTierEntityContextMenuLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> presenterFactory; // @synthesize presenterFactory=_presenterFactory;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)contextMenuPresenterWithSenderView:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1;
- (void)tapContextMenuButton:(id)arg1;
- (void)configureWithViewURI:(id)arg1 metadata:(id)arg2;
- (id)initWithPresenterFactory:(id)arg1 logger:(id)arg2 pageInstanceIdProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

