//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GWA2AutocompleteOption, GWA2AutocompleteTemplateNode, UIView;

@protocol GWA2AutocompleteTemplateNodeDelegate <NSObject>
- (void)autocompleteTemplateNode:(GWA2AutocompleteTemplateNode *)arg1 didSelectAutocompleteOption:(GWA2AutocompleteOption *)arg2;
- (void)autocompleteTemplateNode:(GWA2AutocompleteTemplateNode *)arg1 didCreateInputAccessoryView:(UIView *)arg2;
@end

