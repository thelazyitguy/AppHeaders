//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileCreatePlaylistEventFactory, SPTUBIPLCMobileRenamePlaylistEventFactory;

@interface SPTCreatePlaylistLogging : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBIMobileCreatePlaylistEventFactory> _createPlaylistEventFactory;
    id <SPTUBIPLCMobileRenamePlaylistEventFactory> _renamePlaylistEventFactory;
    id <SPTUBILogger> _ubiLogger;
    NSURL *_pageURI;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(retain, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(retain, nonatomic) id <SPTUBIPLCMobileRenamePlaylistEventFactory> renamePlaylistEventFactory; // @synthesize renamePlaylistEventFactory=_renamePlaylistEventFactory;
@property(retain, nonatomic) id <SPTUBIMobileCreatePlaylistEventFactory> createPlaylistEventFactory; // @synthesize createPlaylistEventFactory=_createPlaylistEventFactory;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logUIInteractionWithUserIntent:(id)arg1 featureIdValue:(id)arg2 pageURI:(id)arg3;
- (void)logRenameButtonSelectedWithPlaylistURI:(id)arg1;
- (void)logRenameCancelButtonSelected;
- (void)logCreateButtonSelectedWithDefaultName:(_Bool)arg1;
- (void)logCreateCancelButtonSelected;
- (id)initWithPageURI:(id)arg1 logCenter:(id)arg2 createPlaylistEventFactory:(id)arg3 renamePlaylistEventFactory:(id)arg4 ubiLogger:(id)arg5;

@end

