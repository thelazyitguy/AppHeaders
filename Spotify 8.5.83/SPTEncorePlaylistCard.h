//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SPTEncorePlaylistCardDelegate;

@interface SPTEncorePlaylistCard : NSObject
{
    // Error parsing type: , name: component
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) UIView *uiView;
- (void)update:(id)arg1;
@property(nonatomic) __weak id <SPTEncorePlaylistCardDelegate> delegate; // @synthesize delegate;

@end
