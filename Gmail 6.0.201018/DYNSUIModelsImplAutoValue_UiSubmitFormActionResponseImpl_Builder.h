//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplUiSubmitFormActionResponseImpl_Builder.h"

@class JavaUtilOptional;
@protocol DYNSUIModelsUiActionStatus;

@interface DYNSUIModelsImplAutoValue_UiSubmitFormActionResponseImpl_Builder : DYNSUIModelsImplUiSubmitFormActionResponseImpl_Builder
{
    id <DYNSUIModelsUiActionStatus> uiActionStatus_;
    JavaUtilOptional *cardItem_;
    JavaUtilOptional *setupUrl_;
}

- (void)dealloc;
- (id)build;
- (id)setSetupUrlWithJavaUtilOptional:(id)arg1;
- (id)setCardItemWithJavaUtilOptional:(id)arg1;
- (id)setUiActionStatusWithDYNSUIModelsUiActionStatus:(id)arg1;

@end
