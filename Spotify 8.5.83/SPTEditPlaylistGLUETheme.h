//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEThemeBase.h"

@class SPTEditPlaylistEditStyle;
@protocol GLUETheme;

@interface SPTEditPlaylistGLUETheme : GLUEThemeBase
{
    id <GLUETheme> _theme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (id)renameFieldStyle;
- (id)editCellStyle;
@property(readonly, copy, nonatomic) SPTEditPlaylistEditStyle *editStyle;
- (id)initWithParentTheme:(id)arg1;

@end
