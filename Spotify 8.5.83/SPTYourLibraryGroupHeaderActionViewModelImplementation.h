//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTProfileUserDataChangeObserver-Protocol.h"
#import "SPTYourLibraryGroupHeaderActionViewModel-Protocol.h"

@class NSString, NSURL, SPTYourLibraryLogger;
@protocol SPTLinkDispatcher, SPTProfileUserData, SPTYourLibraryGroupHeaderActionViewModelDelegate;

@interface SPTYourLibraryGroupHeaderActionViewModelImplementation : NSObject <SPTProfileUserDataChangeObserver, SPTYourLibraryGroupHeaderActionViewModel>
{
    _Bool _visible;
    NSString *_accessibilityLabel;
    long long _icon;
    unsigned long long _componentType;
    id <SPTYourLibraryGroupHeaderActionViewModelDelegate> _delegate;
    id <SPTProfileUserData> _profileUserData;
    SPTYourLibraryLogger *_logger;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSURL *_buttonImageURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *buttonImageURL; // @synthesize buttonImageURL=_buttonImageURL;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTYourLibraryLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTProfileUserData> profileUserData; // @synthesize profileUserData=_profileUserData;
@property(nonatomic) __weak id <SPTYourLibraryGroupHeaderActionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long componentType; // @synthesize componentType=_componentType;
@property(readonly, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly) long long icon; // @synthesize icon=_icon;
@property(readonly, copy) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void)updateImage;
- (void)profileUserDataDidChangeWithUserData:(id)arg1;
- (void)action;
- (id)initWithTestManager:(id)arg1 profileUserData:(id)arg2 logger:(id)arg3 linkDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

