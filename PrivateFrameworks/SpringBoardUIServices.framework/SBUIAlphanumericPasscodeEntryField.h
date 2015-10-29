/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_springView;
    UIView *_springViewParent;
}

@property (nonatomic, readonly) UITextInputTraits *textInputTraits;

- (void)_autofillForMesaWithCompletion:(id /* block */)arg1;
- (void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2;
- (void)dealloc;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (void)layoutSubviews;
- (void)notePasscodeFieldTextDidChange;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)textInputTraits;

@end