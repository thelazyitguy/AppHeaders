//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTIMusicEntityRef, YTIMusicEntityReference, YTIRenderer;

@interface YTIMusicDataBoundMenuRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityRef *containerEntityId; // @dynamic containerEntityId;
@property(retain, nonatomic) YTIMusicEntityReference *containerEntityReference; // @dynamic containerEntityReference;
@property(retain, nonatomic) NSMutableArray *dataBoundMenuEndButtonsArray; // @dynamic dataBoundMenuEndButtonsArray;
@property(readonly, nonatomic) unsigned long long dataBoundMenuEndButtonsArray_Count; // @dynamic dataBoundMenuEndButtonsArray_Count;
@property(retain, nonatomic) NSMutableArray *dataBoundMenuItemsArray; // @dynamic dataBoundMenuItemsArray;
@property(readonly, nonatomic) unsigned long long dataBoundMenuItemsArray_Count; // @dynamic dataBoundMenuItemsArray_Count;
@property(retain, nonatomic) NSMutableArray *dataBoundTopLevelMenuButtonsArray; // @dynamic dataBoundTopLevelMenuButtonsArray;
@property(readonly, nonatomic) unsigned long long dataBoundTopLevelMenuButtonsArray_Count; // @dynamic dataBoundTopLevelMenuButtonsArray_Count;
@property(retain, nonatomic) YTIMusicEntityRef *entityId; // @dynamic entityId;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hasContainerEntityId; // @dynamic hasContainerEntityId;
@property(nonatomic) _Bool hasContainerEntityReference; // @dynamic hasContainerEntityReference;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasMenuRendererMold; // @dynamic hasMenuRendererMold;
@property(retain, nonatomic) YTIRenderer *menuRendererMold; // @dynamic menuRendererMold;

@end

