//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GLUETheme;

@interface SPTPodcastSkeletonViewControllerFactory : NSObject
{
    id <GLUETheme> _glueTheme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
- (id)buildSkeletonViewController;
- (id)initWithTheme:(id)arg1;

@end
