//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class CATextLayer, GWAMegalogsContext, NSArray, NSNumber, NSObject, NSString, UIFont;

@interface GWATextFieldTitleView : UIView <GWAMegalogsSupportingComponent>
{
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    UIFont *_font;
    CATextLayer *_frontLayer;
    CATextLayer *_backLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CATextLayer *backLayer; // @synthesize backLayer=_backLayer;
@property(retain, nonatomic) CATextLayer *frontLayer; // @synthesize frontLayer=_frontLayer;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
- (void)prepareMegalogsContexts;
@property(nonatomic) NSObject *string;
- (void)setBackLayerColor:(struct CGColor *)arg1;
- (struct CGColor *)backLayerColor;
- (void)setFrontLayerColor:(struct CGColor *)arg1;
- (struct CGColor *)frontLayerColor;
- (void)applyUserInterfaceStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
