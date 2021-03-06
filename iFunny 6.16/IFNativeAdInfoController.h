//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFFeedTopPanelControllerInput-Protocol.h>

@class IFNativeAdInfoView, IFRootRouter, NSString;
@protocol IFAdvertisementComplainParametersBuilding, IFFeedTopPanelViewInput;

@interface IFNativeAdInfoController : NSObject <IFFeedTopPanelControllerInput>
{
    _Bool smilesHidden;
    IFNativeAdInfoView<IFFeedTopPanelViewInput> *_viewInput;
    IFRootRouter *_router;
    CDUnknownBlockType _closeModuleHandler;
    id <IFAdvertisementComplainParametersBuilding> _advertisementComplainParametersBuilder;
    CDUnknownBlockType _tapOnInfoHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapOnInfoHandler; // @synthesize tapOnInfoHandler=_tapOnInfoHandler;
@property(retain, nonatomic) id <IFAdvertisementComplainParametersBuilding> advertisementComplainParametersBuilder; // @synthesize advertisementComplainParametersBuilder=_advertisementComplainParametersBuilder;
@property(copy, nonatomic) CDUnknownBlockType closeModuleHandler; // @synthesize closeModuleHandler=_closeModuleHandler;
@property(retain, nonatomic) IFRootRouter *router; // @synthesize router=_router;
@property(nonatomic) __weak IFNativeAdInfoView<IFFeedTopPanelViewInput> *viewInput; // @synthesize viewInput=_viewInput;
@property(nonatomic) _Bool smilesHidden; // @synthesize smilesHidden;
- (id)adsParams;
- (void)closeModule;
- (void)updateMemeSummaryInfo:(id)arg1 memeChanged:(_Bool)arg2;
- (void)updateContentNativeAdWithTapOnInfoHandler:(CDUnknownBlockType)arg1;
- (id)initAdvertisementComplainParametersBuilder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

