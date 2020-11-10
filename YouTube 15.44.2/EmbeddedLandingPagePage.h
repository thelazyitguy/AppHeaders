//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, OrchAlert, OrchBalanceCard, OrchDependencyGraph, OrchDocumentDownload, OrchImageWithCaption, OrchWebViewComponent;

@interface EmbeddedLandingPagePage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionBarArray; // @dynamic actionBarArray;
@property(readonly, nonatomic) unsigned long long actionBarArray_Count; // @dynamic actionBarArray_Count;
@property(retain, nonatomic) OrchAlert *alert; // @dynamic alert;
@property(retain, nonatomic) OrchBalanceCard *balanceCard; // @dynamic balanceCard;
@property(retain, nonatomic) NSMutableArray *cardHeaderArray; // @dynamic cardHeaderArray;
@property(readonly, nonatomic) unsigned long long cardHeaderArray_Count; // @dynamic cardHeaderArray_Count;
@property(retain, nonatomic) NSMutableArray *componentGroupArray; // @dynamic componentGroupArray;
@property(readonly, nonatomic) unsigned long long componentGroupArray_Count; // @dynamic componentGroupArray_Count;
@property(retain, nonatomic) NSMutableArray *confirmationDialogArray; // @dynamic confirmationDialogArray;
@property(readonly, nonatomic) unsigned long long confirmationDialogArray_Count; // @dynamic confirmationDialogArray_Count;
@property(retain, nonatomic) OrchDependencyGraph *dependencyGraph; // @dynamic dependencyGraph;
@property(retain, nonatomic) NSMutableArray *detailInformationArray; // @dynamic detailInformationArray;
@property(readonly, nonatomic) unsigned long long detailInformationArray_Count; // @dynamic detailInformationArray_Count;
@property(retain, nonatomic) OrchDocumentDownload *documentDownload; // @dynamic documentDownload;
@property(nonatomic) _Bool hasAlert; // @dynamic hasAlert;
@property(nonatomic) _Bool hasBalanceCard; // @dynamic hasBalanceCard;
@property(nonatomic) _Bool hasDependencyGraph; // @dynamic hasDependencyGraph;
@property(nonatomic) _Bool hasDocumentDownload; // @dynamic hasDocumentDownload;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasWebViewComponent; // @dynamic hasWebViewComponent;
@property(retain, nonatomic) OrchImageWithCaption *image; // @dynamic image;
@property(retain, nonatomic) NSMutableArray *linkArray; // @dynamic linkArray;
@property(readonly, nonatomic) unsigned long long linkArray_Count; // @dynamic linkArray_Count;
@property(retain, nonatomic) NSMutableArray *partialUpdateDataArray; // @dynamic partialUpdateDataArray;
@property(readonly, nonatomic) unsigned long long partialUpdateDataArray_Count; // @dynamic partialUpdateDataArray_Count;
@property(retain, nonatomic) NSMutableArray *paymentMethodArray; // @dynamic paymentMethodArray;
@property(readonly, nonatomic) unsigned long long paymentMethodArray_Count; // @dynamic paymentMethodArray_Count;
@property(retain, nonatomic) NSMutableArray *simpleFormArray; // @dynamic simpleFormArray;
@property(readonly, nonatomic) unsigned long long simpleFormArray_Count; // @dynamic simpleFormArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(retain, nonatomic) OrchWebViewComponent *webViewComponent; // @dynamic webViewComponent;

@end

