//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol SSOService;

@protocol DXPFlags
@property(readonly, nonatomic, getter=isDragAndDropDisabled) _Bool dragAndDropDisabled;
@property(readonly, nonatomic, getter=isSharingDisabled) _Bool sharingDisabled;
@property(readonly, nonatomic, getter=isPasteboardDisabled) _Bool pasteboardDisabled;
@property(readonly, nonatomic, getter=isAllDisabled) _Bool allDisabled;
- (void)updateFlags;
- (void)syncExperimentsWithSSOService:(id <SSOService>)arg1;
- (void)registerWithPhenotype;
@end
