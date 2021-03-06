//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANPConfigChromeContext-Protocol.h"

@class ANPChromeWidget, ANPGenericSkin, NSArray, NSMutableDictionary, NSString;

@interface ANPConfigChromeContextImpl : NSObject <ANPConfigChromeContext>
{
    ANPGenericSkin *_genericSkin;
    NSArray *_layoutOverrideItems;
    NSMutableDictionary *_propertyOverride;
    ANPChromeWidget *_chromeWidget;
    NSString *_appearanceConfig;
}

@property(retain, nonatomic) NSString *appearanceConfig; // @synthesize appearanceConfig=_appearanceConfig;
@property(retain, nonatomic) ANPChromeWidget *chromeWidget; // @synthesize chromeWidget=_chromeWidget;
@property(retain, nonatomic) NSMutableDictionary *propertyOverride; // @synthesize propertyOverride=_propertyOverride;
@property(retain, nonatomic) NSArray *layoutOverrideItems; // @synthesize layoutOverrideItems=_layoutOverrideItems;
@property(retain, nonatomic) ANPGenericSkin *genericSkin; // @synthesize genericSkin=_genericSkin;
- (void).cxx_destruct;
- (id)applyLayoutOverrides:(id)arg1;
- (id)getPropertyOverrideForItemType:(long long)arg1 property:(long long)arg2;
- (id)getTapOverrideUriForItemType:(long long)arg1;
- (id)getRefmarkerOverrideForItemType:(long long)arg1;
- (id)initWith:(id)arg1 layoutOverrideItems:(id)arg2 propertyOverride:(id)arg3 chromeWidget:(id)arg4 appearanceConfig:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

