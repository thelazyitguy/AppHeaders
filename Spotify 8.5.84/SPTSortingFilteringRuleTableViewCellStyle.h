//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTSortingFilteringRuleTableViewCellStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleStyle;
    long long _selectedIcon;
    UIColor *_selectedIconColor;
    struct CGSize _selectedIconSize;
    struct UIEdgeInsets _margins;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *selectedIconColor; // @synthesize selectedIconColor=_selectedIconColor;
@property(nonatomic) struct CGSize selectedIconSize; // @synthesize selectedIconSize=_selectedIconSize;
@property(nonatomic) long long selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

