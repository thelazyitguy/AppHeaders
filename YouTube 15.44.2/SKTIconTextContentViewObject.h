//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTextContentViewObject.h>

@class QTMColorGroup, SKTColorTheme;
@protocol SKTSendKitCoreOptions, UITraitEnvironment;

@interface SKTIconTextContentViewObject : GOOTextContentViewObject
{
    _Bool _hasOutline;
    QTMColorGroup *_iconBackgroundColorGroup;
    SKTColorTheme *_colors;
    id <UITraitEnvironment> _userInterfaceElement;
    id <SKTSendKitCoreOptions> _displayOptions;
}

+ (id)objectForNoContactsWithColorOverrides:(id)arg1 colors:(id)arg2 displayOptions:(id)arg3 userInterfaceElement:(id)arg4;
+ (id)objectForShowDeviceContactsWithColorOverrides:(id)arg1 colors:(id)arg2 displayOptions:(id)arg3 userInterfaceElement:(id)arg4;
+ (id)objectWithTitle:(id)arg1 icon:(id)arg2 iconBackgroundColorGroup:(id)arg3 colorOverrides:(id)arg4 colors:(id)arg5 displayOptions:(id)arg6 userInterfaceElement:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SKTSendKitCoreOptions> displayOptions; // @synthesize displayOptions=_displayOptions;
@property(nonatomic) __weak id <UITraitEnvironment> userInterfaceElement; // @synthesize userInterfaceElement=_userInterfaceElement;
@property(retain, nonatomic) SKTColorTheme *colors; // @synthesize colors=_colors;
@property(nonatomic) _Bool hasOutline; // @synthesize hasOutline=_hasOutline;
@property(retain, nonatomic) QTMColorGroup *iconBackgroundColorGroup; // @synthesize iconBackgroundColorGroup=_iconBackgroundColorGroup;
- (Class)contentViewClass;
- (id)detailTextColor;
- (id)textColor;

@end

